
void FUN_ram_4039addc(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x1000;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x400;
  }
  if ((param_2 & 0x80) != 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x800;
  }
  if ((param_2 & 0x100) != 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x100;
  }
  if ((param_2 & 0x200) != 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x200;
  }
  if ((int)(param_2 << 0x11) < 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x2000;
  }
  if ((param_2 & 0x400) != 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x10;
  }
  if ((int)(param_2 << 0x14) < 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x20;
  }
  if ((int)(param_2 << 0x13) < 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x40;
  }
  if ((int)(param_2 << 0x12) < 0) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x80;
  }
  return;
}

