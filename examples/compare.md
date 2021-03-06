# Numerical Results for Comparison

## SPE1A

![compare](figure\spe1a\spe1a.png)

```
---------------------------------------------------
PS_IMPES_1

0.1  1  0.1

Final time:          3655.5 Days
Total time steps:    5533
Total nonlin steps:  5533
Total linear steps:  8828
Linear solver time:  0.932773s
Simulation time:     2.44659s

---------------------------------------------------
OCP_IMPEC_1

.\OpenCAEPoro.exe ..\..\data\spe1a\spe1a.data  IMPEC  0.1  1  0.1

Final time:          3655.500 Days
Total time steps:    5271
Total Newton steps:  5271 (+39 wasted steps)
Total linear steps:  8327 (+73 wasted steps)
Linear solve time:   0.825s (58.022%)
Simulation time:     1.422s
```

```
---------------------------------------------------
PS_FIM_10

1  10  0.1

Final time:          3655.5 Days
Total time steps:    420
Total Newton steps:  434
Wasted Newton steps: 1
Total linear steps:  1235
Linear solver time:  3.62965s
Simulation time:     4.08421s

---------------------------------------------------
OCP_FIM_10

.\OpenCAEPoro.exe ..\..\data\spe1a\spe1a.data  FIM  1  10  0.1

precond_type             = 69

Final time:          3655.500 Days
Total time steps:    420
Total Newton steps:  480 (+1 wasted steps)
Total linear steps:  6290 (+18 wasted steps)
Linear solve time:   0.387s (58.302%)
Simulation time:     0.663s

Precise precision

Final time:          3655.500 Days
Total time steps:    420
Total Newton steps:  480 (+1 wasted steps)
Total linear steps:  6290 (+18 wasted steps)
Linear solve time:   0.378s (54.644%)
Simulation time:     0.692s

AIMc

Final time:          3655.500 Days
Total time steps:    420
Total Newton steps:  466 (+1 wasted steps)
Total linear steps:  6295 (+19 wasted steps)
Linear solve time:   0.372s (67.303%)
Simulation time:     0.552s

```



## SPE1B

![spe1b](figure\spe1b\spe1b.png)

```
---------------------------------------------------
PS_IMPES_1

0.1  1  0.1

Final time:          3655.5 Days
Total time steps:    4168
Total nonlin steps:  4168
Total linear steps:  7601
Linear solver time:  0.824397s
Simulation time:     1.99241s

---------------------------------------------------
OCP_IMPEC_1

 .\OpenCAEPoro.exe ..\..\data\spe1b\spe1b.data  IMPEC  0.1  1  0.1

Final time:          3655.500 Days
Total time steps:    3849
Total Newton steps:  3849 (+9 wasted steps)
Total linear steps:  7198 (+15 wasted steps)
Linear solve time:   0.663s (60.853%)
Simulation time:     1.090s
```

```
---------------------------------------------------
PS_FIM_10

1  10  0.1

Final time:          3655.5 Days
Total time steps:    420
Total Newton steps:  437
Wasted Newton steps: 1
Total linear steps:  1212
Linear solver time:  2.6363s
Simulation time:     3.08908s

---------------------------------------------------
OCP_FIM_10

.\OpenCAEPoro.exe ..\..\data\spe1b\spe1b.data  FIM  1  10  0.1 

precond_type             = 69

Final time:          3655.500 Days
Total time steps:    421
Total Newton steps:  505 (+1 wasted steps)
Total linear steps:  6320 (+19 wasted steps)
Linear solve time:   0.365s (55.638%)
Simulation time:     0.656s


Precise precision

Final time:          3655.500 Days
Total time steps:    421
Total Newton steps:  505 (+1 wasted steps)
Total linear steps:  6320 (+19 wasted steps)
Linear solve time:   0.357s (53.160%)
Simulation time:     0.671s

AIMc

Final time:          3655.500 Days
Total time steps:    421
Total Newton steps:  482 (+1 wasted steps)
Total linear steps:  6155 (+20 wasted steps)
Linear solve time:   0.451s (71.675%)
Simulation time:     0.630s
```


## SPE9

![spe9](figure\spe9\spe9.png)

```
---------------------------------------------------
PS_IMEPS_1

0.1  1  0.1

Final time:          900 Days
Total time steps:    7767
Total nonlin steps:  7767
Total linear steps:  12465
Linear solver time:  57.9099s
Simulation time:     276.62s

---------------------------------------------------
OCP_IMPEC_1

.\OpenCAEPoro.exe ..\..\data\spe9\spe9_IMPEC.data

Final time:          900.000 Days
Total time steps:    7486
Total Newton steps:  7486 (+43 wasted steps)
Total linear steps:  9897 (+96 wasted steps)
Linear solve time:   55.336s (62.533%)
Simulation time:     88.490s
```

```
---------------------------------------------------
PS_FIM_10

1  10  0.1

Final time:          900 Days
Total time steps:    157
Total Newton steps:  216
Wasted Newton steps: 53
Total linear steps:  1061
Linear solver time:  12.3944s
Simulation time:     27.515s

---------------------------------------------------
OCP_FIM_10

.\OpenCAEPoro.exe ..\..\data\spe9\spe9_FIM.data

precond_type             = 69

Final time:          900.000 Days
Total time steps:    163
Total Newton steps:  224 (+60 wasted steps)
Total linear steps:  3236 (+803 wasted steps)
Linear solve time:   8.590s (55.453%)
Simulation time:     15.491s

Precise precision

Final time:          900.000 Days
Total time steps:    164
Total Newton steps:  224 (+62 wasted steps)
Total linear steps:  3234 (+834 wasted steps)
Linear solve time:   9.224s (51.685%)
Simulation time:     17.846s

Final time:          900.000 Days
Total time steps:    161
Total Newton steps:  223 (+57 wasted steps)
Total linear steps:  3229 (+752 wasted steps)
Linear solve time:   8.516s (53.644%)
Simulation time:     15.875s


AIMc

Final time:          900.000 Days
Total time steps:    162
Total Newton steps:  290 (+73 wasted steps)
Total linear steps:  3616 (+875 wasted steps)
Linear solve time:   9.958s (61.743%)
Simulation time:     16.129s
```



## SPE10

![spe10](figure\spe10\spe10.png)

```
---------------------------------------------------
PS_FIM

Final time:          2000 Days
Total time steps:    53
Total Newton steps:  215
Wasted Newton steps: 5
Total linear steps:  1305
Linear solver time:  1413.86s
Simulation time:     2905.24s

---------------------------------------------------
OCP_FIM

.\OpenCAEPoro.exe ..\..\data\spe10\spe10.data

Final time:          2000.000 Days
Total time steps:    53
Total Newton steps:  215 (+5 wasted steps)
Total linear steps:  1278 (+40 wasted steps)
Linear solve time:   1403.826s (74.590%)
Simulation time:     1882.050s
```



## CP

![CP](figure\Cornerpoint\CP.png)



```
---------------------------------------------------
PS_IMPEC_1

0.1  1  0.1

Final time:          1000.000 Days
Total time steps:    4541
Total nonlin steps:  4541
Total linear steps:  4543
Linear solver time:  2.269s
Simulation time:     28.627s

---------------------------------------------------
OCP_IMPEC_1

 .\OpenCAEPoro.exe ..\..\data\cornerpoint\CP.data  IMPEC  0.1  1  0.1

Final time:          1000.000 Days
Total time steps:    1999
Total Newton steps:  1999 (+3 wasted steps)
Total linear steps:  13516 (+35 wasted steps)
Linear solve time:   0.043s (39.826%)
Simulation time:     0.109s
```

```
---------------------------------------------------
PS_FIM_10

1  10  0.1

Final time:          1000.000 Days
Total time steps:    145
Total Newton steps:  256
Wasted Newton steps: 4
Total linear steps:  263
Linear solver time:  0.745s
Simulation time:     1.654s

---------------------------------------------------
OCP_FIM_10

.\OpenCAEPoro.exe ..\..\data\cornerpoint\CP.data  FIM 1  10  0.1
 
precond_type             = 69

Final time:          1000.000 Days
Total time steps:    143
Total Newton steps:  245 (+6 wasted steps)
Total linear steps:  2290 (+57 wasted steps)
Linear solve time:   0.037s (44.989%)
Simulation time:     0.083s

Precise precision

Final time:          1000.000 Days
Total time steps:    143
Total Newton steps:  245 (+6 wasted steps)
Total linear steps:  2290 (+57 wasted steps)
Linear solve time:   0.037s (42.789%)
Simulation time:     0.087s

AIMc

Final time:          1000.000 Days
Total time steps:    141
Total Newton steps:  249 (+4 wasted steps)
Total linear steps:  2324 (+35 wasted steps)
Linear solve time:   0.038s (43.802%)
Simulation time:     0.086s

```



## SPE5

![spe5](figure\spe5\spe5.png)

????????????????????? (OCP_FIM)

![spe5](figure\spe5\IMPEC1_0.1.png)

![spe5](figure\spe5\IMPEC1_0.05.png)

????????????????????? (OCP_IMPEC)

![spe5](figure\spe5\FIM10_0.1.png)

![spe5](figure\spe5\FIM10_0.05.png)

```
------------------------------------------------------
PS_IMPES

TMARCH
0.1  1  0.1  5  0.3  0.3  300  0.2  0.3  0.001 

Final time:          7305 Days
Total time steps:    14228
Total nonlin steps:  14228
Total linear steps:  20914
flux time(MassConerve):  0.246282s
flux time(updateproperty):  0.133042s
MassConserve time:  0.596821s
updateProperty time:  47.4394s
Linear solver time:  1.4444s
Simulation time:     51.0602s

Method     iters     maxIt    tol
SSMSTA   49846316     300    1E-12  1E-2
SSMSP    7802131      100    1E-5
NRSP     3091611      55     1E-6

------------------------------------------------------
OCP_IMPEC

.\OpenCAEPoro.exe ..\..\data\spe5\spe5.data  IMPEC  0.1  1  0.1

SSMSTA:     6511743
NRSTA:      20659
SSMSP:      9579276
NRSP:       1741235
=========================================
Final time:          7305.000 Days
Total time steps:    10923
Total Newton steps:  10923 (+80 wasted steps)
Total linear steps:  17386 (+156 wasted steps)
Linear solve time:   1.136s (7.188%)
Simulation time:     15.802s
```



```
------------------------------------------------------
PS_FIM

1  10  0.01

Final time:          7305 Days
Total time steps:    21060
Total Newton steps:  23072
Wasted Newton steps: 13992
Total linear steps:  55425
Linear solver time:  74.4161s
Simulation time:     288.01s

Method     iters     maxIt    tol
SSMSTA   312298023     100    1E-12
SSMSP    15015547     100    1E-6
NRSP     5624310      55     1E-12

------------------------------------------------------
OCP_FIM

.\OpenCAEPoro.exe ..\..\data\spe5\spe5.data  FIM  1  10  0.1

precond_type             = 64

SSMSTA:     1168210
NRSTA:      8293
SSMSP:      1692706
NRSP:       242678
=========================================
Final time:          7305.000 Days
Total time steps:    884
Total Newton steps:  1629 (+56 wasted steps)
Total linear steps:  4955 (+141 wasted steps)
Linear solve time:   12.310s (74.666%)
Simulation time:     16.486s

Precise precision

SSMSTA:     1139807
NRSTA:      7772
SSMSP:      1665139
NRSP:       240399
=========================================
Final time:          7305.000 Days
Total time steps:    880
Total Newton steps:  1622 (+34 wasted steps)
Total linear steps:  4887 (+77 wasted steps)
Linear solve time:   11.882s (65.229%)
Simulation time:     18.215s

SSMSTA:     1127775
NRSTA:      8161
SSMSP:      1652804
NRSP:       234189
=========================================
Final time:          7305.000 Days
Total time steps:    852
Total Newton steps:  1600 (+0 wasted steps)
Total linear steps:  4957 (+0 wasted steps)
Linear solve time:   11.618s (67.263%)
Simulation time:     17.273s

AIMc   cfl  0.8

SSMSTA:     1572472
NRSTA:      6868
SSMSP:      1653631
NRSP:       293848
=========================================
Final time:          7305.000 Days
Total time steps:    887
Total Newton steps:  1533 (+61 wasted steps)
Total linear steps:  4461 (+116 wasted steps)
Linear solve time:   10.383s (65.596%)
Simulation time:     15.828s


SSMSTA:     1524587
NRSTA:      7336
SSMSP:      1603571
NRSP:       279690
=========================================
Final time:          7305.000 Days
Total time steps:    852
Total Newton steps:  1489 (+23 wasted steps)
Total linear steps:  4407 (+30 wasted steps)
Linear solve time:   9.824s (68.246%)
Simulation time:     14.395s
```



## SPE3

![compare](figure/spe3/spe3.png)

????????????????????? 5% ??????

```
------------------------------------------------------
PS_IMPES

0.1  1  0.1

Final time:          3650 Days
Total time steps:    3670
Total nonlin steps:  3670
Total linear steps:  7345
flux time(MassConerve):  0.179398s
flux time(updateproperty):  0.175264s
MassConserve time:  0.485313s
updateProperty time:  164.133s
Linear solver time:  1.25312s
Simulation time:     176.526s

Method     iters     maxIt    tol
SSMSTA   102544160    300    1E-12  1E-2
SSMSP    22778402     100    1E-5
NRSP     6775525      55     1E-12

------------------------------------------------------
OCP_IMPEC

.\OpenCAEPoro.exe ..\..\data\spe5\spe5.data  IMPEC  0.1  1  0.1

SSMSTA:     23835193
NRSTA:      19507
SSMSP:      24063413
NRSP:       1468770
=========================================
Final time:          3650.000 Days
Total time steps:    3670
Total Newton steps:  3670 (+0 wasted steps)
Total linear steps:  7318 (+0 wasted steps)
Linear solve time:   1.010s (2.487%)
Simulation time:     40.635s
```

```
------------------------------------------------------
PS_FIM

1  10  0.1

Final time:          3650 Days
Total time steps:    390
Total Newton steps:  588
Total linear steps:  941
Linear solver time:  5.61642s
Simulation time:     39.5691s

Method     iters     maxIt    tol
SSMSTA   17690167    300     1E-12   1E-2
SSMSP    3674930     100     1E-5
NRSP     1222903      55     1E-12

------------------------------------------------------
OCP_FIM

.\OpenCAEPoro.exe ..\..\data\spe3\spe3.data  FIM  1  10  0.1

precond_type             = 64

SSMSTA:     3971560
NRSTA:      10755
SSMSP:      3922595
NRSP:       236608
=========================================
Final time:          3650.000 Days
Total time steps:    390
Total Newton steps:  556 (+0 wasted steps)
Total linear steps:  746 (+0 wasted steps)
Linear solve time:   3.842s (29.132%)
Simulation time:     13.188s

Precise precision

SSMSTA:     3971557
NRSTA:      10755
SSMSP:      3922595
NRSP:       236610
=========================================
Final time:          3650.000 Days
Total time steps:    390
Total Newton steps:  556 (+0 wasted steps)
Total linear steps:  746 (+0 wasted steps)
Linear solve time:   3.911s (20.936%)
Simulation time:     18.679s

SSMSTA:     3971551
NRSTA:      10757
SSMSP:      3922595
NRSP:       236676
=========================================
Final time:          3650.000 Days
Total time steps:    390
Total Newton steps:  556 (+0 wasted steps)
Total linear steps:  746 (+0 wasted steps)
Linear solve time:   3.872s (21.207%)
Simulation time:     18.256s



AIMc   cfl  0.8

SSMSTA:     5133260
NRSTA:      10099
SSMSP:      3480171
NRSP:       194728
=========================================
Final time:          3650.000 Days
Total time steps:    396
Total Newton steps:  406 (+4 wasted steps)
Total linear steps:  598 (+8 wasted steps)
Linear solve time:   3.118s (21.174%)
Simulation time:     14.724s

SSMSTA:     5089990
NRSTA:      10098
SSMSP:      3451798
NRSP:       192718
=========================================
Final time:          3650.000 Days
Total time steps:    390
Total Newton steps:  400 (+0 wasted steps)
Total linear steps:  586 (+0 wasted steps)
Linear solve time:   3.085s (21.244%)
Simulation time:     14.522s
```