
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42025638(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined4 uStack_34;
  
  iVar1 = (*(code *)&SUB_ram_40011a40)(0x3fcb6a9c,*param_1);
  iVar2 = _DAT_ram_3fcb6a44;
  if (iVar1 == 0) {
    iVar2 = (*(code *)&SUB_ram_40011a44)(0x3fcb6a9c);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c24e8);
      uVar3 = 0x292;
LAB_ram_420256a2:
      (*(code *)&SUB_ram_40010034)
                (&DAT_ram_3c0c24d0,uVar3,
                 "Bw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKv+ACgEPAgCjUAAAAAAA");
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    (*(code *)&SUB_ram_40010488)(iVar2,0,0xc);
    (**(code **)(_DAT_ram_3fcb6a44 + 0x24))(iVar2 + 8,param_3,param_4);
    uStack_44 = 0x40395f50;
    *(undefined4 *)(iVar2 + 4) = param_2;
    uStack_3c = 0;
    uStack_34 = 0;
    puStack_38 = &DAT_ram_3c0c258c;
    iStack_40 = iVar2;
    iVar1 = FUN_ram_4204bbc4(&uStack_44,iVar2);
    if (iVar1 != 0) {
      (**(code **)(_DAT_ram_3fcb6a44 + 0x28))(iVar2 + 8);
      FUN_ram_403a3284(0x3fcb6a9c,iVar2);
      *param_1 = 0;
      return 0xffffffff;
    }
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c24e8);
      uVar3 = 0x2b2;
      goto LAB_ram_420256a2;
    }
    *(undefined4 *)(iVar1 + 4) = param_2;
    (**(code **)(iVar2 + 0x24))(iVar1 + 8,param_3,param_4);
  }
  return 0;
}

