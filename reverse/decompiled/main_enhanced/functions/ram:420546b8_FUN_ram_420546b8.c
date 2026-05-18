
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_420546b8(int *param_1,int param_2,undefined1 *param_3)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  int *piVar5;
  
  if (param_1 == (int *)0x0) {
    piVar3 = (int *)0x0;
    uVar4 = 0xf0;
  }
  else if (param_1[5] == 0) {
    piVar3 = _DAT_ram_3fcc52f4;
    if ((*(byte *)((int)param_1 + 9) & 4) != 0) {
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[3]) {
        if ((*(short *)((int)piVar3 + 0x1a) == *(short *)((int)param_1 + 0x1a)) &&
           (*piVar3 == *param_1)) {
          uVar4 = 0xf8;
          goto LAB_ram_420547d0;
        }
      }
    }
    piVar3 = (int *)FUN_ram_420531dc(3);
    if (piVar3 == (int *)0x0) {
      uVar4 = 0xff;
    }
    else {
      piVar3[4] = param_1[4];
      sVar1 = *(short *)((int)param_1 + 0x1a);
      piVar3[5] = 1;
      *(short *)((int)piVar3 + 0x1a) = sVar1;
      *(char *)(piVar3 + 6) = (char)param_1[6];
      *(undefined1 *)((int)piVar3 + 9) = *(undefined1 *)((int)param_1 + 9);
      *(char *)(piVar3 + 2) = (char)param_1[2];
      *(undefined1 *)((int)piVar3 + 0xb) = *(undefined1 *)((int)param_1 + 0xb);
      *(undefined1 *)((int)piVar3 + 10) = *(undefined1 *)((int)param_1 + 10);
      *piVar3 = *param_1;
      if (sVar1 != 0) {
        piVar2 = _DAT_ram_3fcc52f8;
        if (_DAT_ram_3fcc52f8 == param_1) {
          _DAT_ram_3fcc52f8 = (int *)param_1[3];
        }
        else {
          do {
            piVar5 = piVar2;
            if (piVar5 == (int *)0x0) goto LAB_ram_42054740;
            piVar2 = (int *)piVar5[3];
          } while ((int *)piVar5[3] != param_1);
          piVar5[3] = param_1[3];
        }
LAB_ram_42054740:
        param_1[3] = 0;
      }
      FUN_ram_42054506(param_1);
      piVar3[7] = 0x42044db8;
      *(undefined1 *)((int)piVar3 + 0x21) = 0;
      if (piVar3[5] != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      uVar4 = (undefined1)param_2;
      if (param_2 == 0) {
        uVar4 = 1;
      }
      *(undefined1 *)(piVar3 + 8) = uVar4;
      piVar2 = piVar3;
      piVar3[3] = (int)_DAT_ram_3fcc52f4;
      _DAT_ram_3fcc52f4 = piVar2;
      FUN_ram_420585e0();
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xf1;
LAB_ram_420547d0:
    piVar3 = (int *)0x0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar4;
  }
  return piVar3;
}

