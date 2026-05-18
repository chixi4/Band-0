
int FUN_ram_420221ba(uint param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = 0x102;
  if ((((param_1 < 3) && (iVar1 = 0x102, param_2 != (undefined1 *)0x0)) &&
      (param_3 != (undefined1 *)0x0)) && (iVar1 = FUN_ram_4204beee("",0,&uStack_14), iVar1 == 0)) {
    *param_2 = 0;
    *param_3 = 0;
    iVar1 = FUN_ram_420213d0(uStack_14,param_1,param_2);
    FUN_ram_4204c3d0(uStack_14);
  }
  return iVar1;
}

