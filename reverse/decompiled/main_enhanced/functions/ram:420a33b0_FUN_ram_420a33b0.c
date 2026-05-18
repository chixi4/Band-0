
int FUN_ram_420a33b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, param_2 != 0)) {
    while ((iVar1 != 0 &&
           (iVar2 = (*(code *)&SUB_ram_40010504)(*(undefined4 *)(iVar1 + 4),param_2), iVar2 != 0)))
    {
      iVar1 = *(int *)(iVar1 + 0x3c);
    }
  }
  return iVar1;
}

