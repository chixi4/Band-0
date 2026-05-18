
void FUN_ram_42027d74(byte param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = param_2 + param_3;
  for (; param_2 != pbVar1; param_2 = param_2 + 1) {
    *param_2 = *param_2 & ~param_1;
  }
  return;
}

