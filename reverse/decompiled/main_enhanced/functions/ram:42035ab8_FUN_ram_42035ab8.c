
void FUN_ram_42035ab8(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = param_1;
  do {
    pbVar2 = pbVar1 + 1;
    *pbVar1 = (&DAT_ram_3c0f55ec)[*pbVar1];
    pbVar1 = pbVar2;
  } while (pbVar2 != param_1 + 0x10);
  return;
}

