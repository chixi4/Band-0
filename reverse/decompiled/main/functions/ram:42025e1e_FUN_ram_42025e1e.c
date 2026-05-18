
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42025e1e(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_3 != '\0') {
LAB_ram_42025e2c:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  iVar1 = (*(code *)&SUB_ram_40011a00)(*(undefined4 *)(param_3 + 4),4);
  if (iVar1 == 0) {
    uVar2 = 0x11;
  }
  else {
    if (*(undefined **)(param_3 + 8) != &DAT_ram_3c0f4fd0) goto LAB_ram_42025e2c;
    (*(code *)&SUB_ram_40011aac)(iVar1,_DAT_ram_3fcb6b60);
    (*(code *)&SUB_ram_40011aac)(iVar1 + 2,_DAT_ram_3fcb6b5e);
    uVar2 = 0;
  }
  return uVar2;
}

