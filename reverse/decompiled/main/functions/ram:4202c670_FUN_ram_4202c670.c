
void FUN_ram_4202c670(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202c63e();
  if (iVar1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
    (*(code *)&SUB_ram_400119dc)(param_2,iVar1 - (uint)*(ushort *)(param_2 + 0x10));
    return;
  }
  return;
}

