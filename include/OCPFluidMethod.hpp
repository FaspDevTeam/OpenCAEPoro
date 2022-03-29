/*! \file    OCPFluidMethod.hpp
 *  \brief   Declaration of solution methods for fluid part in OpenCAEPoro
 *  \author  Shizhe Li
 *  \date    Oct/01/2021
 *
 *-----------------------------------------------------------------------------------
 *  Copyright (C) 2021--present by the OpenCAEPoro team. All rights reserved.
 *  Released under the terms of the GNU Lesser General Public License 3.0 or later.
 *-----------------------------------------------------------------------------------
 */

#ifndef __OCPFLUIDMETHOD_HEADER__
#define __OCPFLUIDMETHOD_HEADER__

// OpenCAEPoro header files
#include "LinearSystem.hpp"
#include "OCPControl.hpp"
#include "Reservoir.hpp"
#include "UtilTiming.hpp"

/// OCP_IMPEC is IMPEC (implict pressure explict saturation) method.
class OCP_IMPEC
{
public:
    /// Setup IMPEC
    void Setup(Reservoir& rs, LinearSystem& myLS, const OCPControl& ctrl);

    /// Prepare for Assembling matrix.
    void Prepare(Reservoir& rs, OCP_DBL& dt);

    /// Solve the linear system.
    void SolveLinearSystem(LinearSystem& myLS, Reservoir& rs, OCPControl& ctrl);

    /// Update properties of fluids.
    bool UpdateProperty(Reservoir& rs, OCPControl& ctrl);
    bool UpdateProperty01(Reservoir& rs, OCPControl& ctrl);

    /// Determine if NR iteration finishes.
    bool FinishNR() { return true; }
    bool FinishNR01(Reservoir& rs, OCPControl& ctrl);

    void FinishStep(Reservoir& rs, OCPControl& ctrl);
};

/// OCP_FIM is FIM (Fully Implicit Method).
class OCP_FIM
{
public:
    /// Setup FIM
    void Setup(Reservoir& rs, LinearSystem& myLS, const OCPControl& ctrl);

    /// Prepare for Assembling matrix.
    void Prepare(Reservoir& rs, OCP_DBL& dt);

    /// Assemble Matrix
    void AssembleMat(LinearSystem& myLS, const Reservoir& rs, const OCP_DBL& dt) const;

    /// Solve the linear system.
    void SolveLinearSystem(LinearSystem& myLS, Reservoir& rs, OCPControl& ctrl);

    /// Update properties of fluids.
    bool UpdateProperty(Reservoir& rs, OCPControl& ctrl);

    /// Finish a Newton-Raphson iteration.
    bool FinishNR(Reservoir& rs, OCPControl& ctrl);

    /// Finish a time step.
    void FinishStep(Reservoir& rs, OCPControl& ctrl);

protected:
    /// Resiual for FIM
    ResFIM resFIM;
};

/// perform AIM in time, that is, local FIM will be performed after global IMPEC performs
class OCP_AIMt
{
public:
    /// Setup AIMt
    void Setup(Reservoir& rs, LinearSystem& myLS, LinearSystem& myAuxLS, const OCPControl& ctrl);
    /// Prepare for Assembling matrix.
    void Prepare(Reservoir& rs, OCP_DBL& dt);
    /// Update properties of fluids.
    bool UpdateProperty(Reservoir& rs, OCPControl& ctrl, LinearSystem& myAuxLS);

private:
    /// Resiual for FIM
    ResFIM resFIM;

};

/// IMPEC will be performed to give a initial value for FIM
class OCP_FIM_IMPEC : public OCP_FIM
{
    friend class FluidSolver;
public:
    /// Setup FIM
    void Setup(Reservoir& rs, LinearSystem& MyLS, LinearSystem& AuxMyLS, const OCPControl& ctrl);
    /// Prepare for Assembling matrix.
    void Prepare(Reservoir& rs, OCP_DBL& dt, LinearSystem& AuxMyLS);
    /// Perform IMPEC as Initial value
    void IMPECInit(Reservoir& rs, OCP_DBL& dt, LinearSystem& AuxMyLS);
    /// Update properties of fluids.
    bool UpdateProperty(Reservoir& rs, OCPControl& ctrl, LinearSystem& AuxMyLS);
    /// Finish a Newton-Raphson iteration.
    bool FinishNR(Reservoir& rs, OCPControl& ctrl, LinearSystem& AuxMyLS);
};

#endif /* end if __OCPFLUIDMETHOD_HEADER__ */

/*----------------------------------------------------------------------------*/
/*  Brief Change History of This File                                         */
/*----------------------------------------------------------------------------*/
/*  Author              Date             Actions                              */
/*----------------------------------------------------------------------------*/
/*  Shizhe Li           Oct/01/2021      Create file                          */
/*  Chensong Zhang      Oct/15/2021      Format file                          */
/*----------------------------------------------------------------------------*/