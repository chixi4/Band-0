
void FUN_ram_420a20f4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[6];
  (*(code *)&SUB_ram_40010488)(param_1,0,0x20);
  *param_1 = param_2 & 3;
  param_1[6] = uVar2;
  iVar1 = 0x15;
  if ((param_2 != 0) && (iVar1 = 2, param_2 == 1)) {
    iVar1 = 5;
  }
  *param_1 = *param_1 & 0xfffe03ff | iVar1 << 10;
  return;
}

