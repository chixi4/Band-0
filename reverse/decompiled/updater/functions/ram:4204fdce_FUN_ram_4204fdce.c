
int FUN_ram_4204fdce(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (param_2 == 2) {
    uVar5 = 0;
    cVar1 = (param_3 == 0x88) + ' ';
  }
  else if (param_2 == 3) {
    uVar5 = param_3 & 0xff;
    cVar1 = '@';
  }
  else {
    if (param_2 != 1) {
      puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar6 = 0x16;
      goto LAB_ram_4204fdf4;
    }
    uVar5 = 0;
    cVar1 = '\x10';
  }
  iVar3 = FUN_ram_42059db6(cVar1,uVar5,0x4203ef46);
  if (iVar3 == 0) {
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar6 = 0x69;
  }
  else {
    iVar4 = FUN_ram_4204e8f2(iVar3,0);
    if (iVar4 != -1) {
      *(int *)(iVar3 + 0x1c) = iVar4;
      FUN_ram_4204ecbc(&DAT_ram_3fcb576c + (iVar4 + -0x3c) * 0x14);
      return iVar4;
    }
    FUN_ram_42059e24(iVar3);
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar6 = 0x17;
  }
LAB_ram_4204fdf4:
  *puVar2 = uVar6;
  return -1;
}

