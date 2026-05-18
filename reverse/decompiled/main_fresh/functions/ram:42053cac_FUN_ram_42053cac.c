
void FUN_ram_42053cac(int param_1,undefined4 param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  if (param_1 != 0) goto LAB_ram_42053cbe;
  do {
    uVar8 = FUN_ram_4039bf1e();
LAB_ram_42053cbe:
    uVar1 = *(ushort *)((int)uVar8 + 8);
    if ((uint)uVar1 <= (uint)(uVar8 >> 0x20)) {
      return;
    }
    uVar2 = uVar8 >> 0x20;
    do {
      uVar5 = (uint)(uVar8 >> 0x20);
      piVar3 = (int *)uVar8;
      uVar7 = (uint)*(ushort *)((int)piVar3 + 10);
      if (uVar5 <= uVar7) {
        if (((((*(byte *)(piVar3 + 3) & 0xf) != 0) || (uVar7 == uVar5)) ||
            ((*(byte *)((int)piVar3 + 0xd) & 2) != 0)) ||
           ((piVar6 = (int *)FUN_ram_420530b8(piVar3,(piVar3[1] - (int)piVar3) + uVar5),
            piVar6 != (int *)0x0 && (piVar3 == piVar6)))) {
          uVar4 = (undefined2)(uVar8 >> 0x20);
          *(undefined2 *)((int)piVar3 + 10) = uVar4;
          *(undefined2 *)(piVar3 + 2) = uVar4;
          if (*piVar3 != 0) {
            FUN_ram_42053ac4();
          }
          *piVar3 = 0;
          return;
        }
        break;
      }
      *(ushort *)(piVar3 + 2) = (short)piVar3[2] + ((short)uVar2 - uVar1);
      uVar8 = CONCAT44(uVar5 - uVar7,*piVar3) & 0xffffffffffff;
    } while (*piVar3 != 0);
  } while( true );
}

