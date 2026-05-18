
void FUN_ram_420449c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_6 + 0x9fc) = param_7;
  *(undefined4 *)(param_6 + 0xa00) = param_2;
  *(undefined4 *)(param_6 + 0xa04) = param_3;
  *(undefined4 *)(param_6 + 0xb54) = uVar1;
  *(undefined4 *)(param_6 + 0xb60) = uVar2;
  return;
}

