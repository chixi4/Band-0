
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a4cf4(int param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 == 3) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3f8))();
    if ((iVar1 != 0) &&
       (((iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x44c))(), iVar1 != 0 ||
         (iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3f4))(), iVar1 != 0)) && (*param_2 == '\x03')))
       ) {
      iVar1 = *(int *)(param_2 + 0xc);
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x9000,*(undefined2 *)(iVar1 + 8));
      (**(code **)(_DAT_ram_3fcdfecc + 0x90))(iVar1 + 0xbc);
      return 1;
    }
  }
  else if (((param_1 == 6) && (*param_2 == '\a')) &&
          (iVar1 = *(int *)(param_2 + 0xc),
          *(int *)(*(int *)(_DAT_ram_3fcdfedc + 0xc) + 0x40) - *(int *)(iVar1 + 0x40) < 0)) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x9001);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x2b4))(iVar1);
    return 1;
  }
  return 0;
}

