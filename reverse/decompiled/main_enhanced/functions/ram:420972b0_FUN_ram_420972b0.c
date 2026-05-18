
void FUN_ram_420972b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xffffefff;
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x1000;
  }
  return;
}

