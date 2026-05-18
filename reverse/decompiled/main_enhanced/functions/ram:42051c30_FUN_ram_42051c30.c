
uint FUN_ram_42051c30(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte bVar5;
  
  piVar3 = (int *)FUN_ram_4205032e();
  if (piVar3 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 == 3) {
      uVar2 = 2;
      uVar1 = ((uint *)*piVar3)[10];
      if ((*(uint *)*piVar3 & 0xf0) == 0x10) {
        FUN_ram_4205c96c();
        uVar2 = 0;
        if (*(int *)(*piVar3 + 8) != 0) {
          uVar2 = *(ushort *)(*(int *)(*piVar3 + 8) + 0x1e) >> 5 & 1 ^ 1;
        }
        FUN_ram_4205c996();
        uVar2 = uVar2 << 1;
      }
      uVar2 = uVar2 | ((byte)uVar1 & 2) << 0xd;
    }
    else if ((param_2 == 4) && ((param_3 & 0xffffbffc) == 0)) {
      bVar5 = *(byte *)(*piVar3 + 0x28);
      if ((int)(param_3 << 0x11) < 0) {
        bVar5 = bVar5 | 2;
      }
      else {
        bVar5 = bVar5 & 0xfd;
      }
      *(byte *)(*piVar3 + 0x28) = bVar5;
      uVar2 = 0;
    }
    else {
      puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      *puVar4 = 0x58;
      uVar2 = 0xffffffff;
    }
    FUN_ram_4205027e(piVar3);
  }
  return uVar2;
}

