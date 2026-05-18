
void FUN_ram_420abdf6(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_ram_420abdb8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
  if (iVar1 != 0) {
    param_4[3] = 8;
    *param_4 = param_3;
    param_4[1] = 6;
  }
  return;
}

