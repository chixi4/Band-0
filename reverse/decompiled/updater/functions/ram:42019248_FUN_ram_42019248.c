
int * FUN_ram_42019248(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[3] != 0) {
    FUN_ram_40390ff2(0x3fcb66b4);
    while ((iVar1 = param_1[3], iVar1 != 0 &&
           ((((*param_1 != 0xff && (*param_1 != *(int *)(iVar1 + 4))) ||
             ((param_1[1] != 0xff && (param_1[1] != *(int *)(iVar1 + 8))))) ||
            ((param_1[2] != 0 && (iVar2 = FUN_ram_4039a06c(param_1[2],iVar1 + 0x18), iVar2 != 0)))))
           )) {
      param_1[3] = *(int *)(iVar1 + 0x30);
    }
    FUN_ram_4039100a(0x3fcb66b4);
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      param_1[4] = iVar1;
      param_1[3] = *(int *)(iVar1 + 0x30);
      return param_1;
    }
  }
  thunk_FUN_ram_40390608(param_1);
  return (int *)0x0;
}

