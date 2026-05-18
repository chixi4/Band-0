
void FUN_ram_40391f5a(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)((int)param_1 + 0xf);
  FUN_ram_40391f4a();
  iVar5 = (bVar1 & 1) * 4;
  puVar3 = *(undefined4 **)(iVar5 + 0x3fcb6724);
  iVar6 = param_1[6];
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x1c) = param_1[7];
  }
  *(int *)param_1[7] = iVar6;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1[3] & 0xff000000;
  if (param_1 == puVar3) {
    puVar3 = *(undefined4 **)(iVar5 + 0x3fcb6724);
    uVar2 = 0xffffffff;
    uVar4 = 0xffffffff;
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = *puVar3;
      uVar4 = puVar3[1];
    }
    FUN_ram_4039123a(uVar2,uVar4);
  }
  FUN_ram_40391f3a();
  return;
}

