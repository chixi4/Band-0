
int FUN_ram_4207330a(int param_1,undefined1 param_2,undefined1 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 auStack_40 [36];
  
  if (0x20 < param_4) {
    uVar1 = FUN_ram_4206c444(9);
    iVar2 = FUN_ram_4206c6da(uVar1,param_3,param_4,auStack_40);
    if (iVar2 != 0) goto LAB_ram_4207338c;
    param_3 = auStack_40;
    param_4 = 0x20;
  }
  uStack_43 = (undefined1)param_4;
  uStack_44 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = FUN_ram_4206c444(9);
    iVar2 = FUN_ram_4206c572(param_1,uVar1,0);
    if ((iVar2 != 0) || (iVar2 = FUN_ram_4206c624(param_1), iVar2 != 0)) goto LAB_ram_4207338c;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  iVar2 = FUN_ram_4206c666(param_1,&uStack_44,2);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4206c666(param_1,param_3,param_4);
  }
LAB_ram_4207338c:
  FUN_ram_4206d7da(auStack_40,0x20);
  return iVar2;
}

