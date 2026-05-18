
void FUN_ram_42017ea6(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
  if ((uVar2 & 1) != 0) {
    puVar1 = (uint *)((param_1 + 0x18002401) * 4);
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  return;
}

