
void FUN_ram_4202e5ba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_40 [40];
  
  (*(code *)&SUB_ram_40010488)(auStack_40,0,0x20);
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x13c) = param_3;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x30;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x18) < 0x30) {
      uVar1 = *(uint *)(param_1 + 0x18) + 1 >> 1;
    }
  }
  iVar2 = FUN_ram_420231fe(param_1 + 0x20,auStack_40,0x100);
  if (iVar2 == 0) {
    FUN_ram_4202e458(param_1,param_4,param_5,uVar1);
  }
  return;
}

