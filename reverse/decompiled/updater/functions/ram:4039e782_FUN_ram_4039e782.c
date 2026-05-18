
void FUN_ram_4039e782(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_2c [20];
  undefined2 uStack_18;
  
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  uStack_18 = 0x66;
  iVar1 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,auStack_2c);
  if (iVar1 == 0) {
    (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
    uStack_18 = 0x99;
    iVar1 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,auStack_2c);
    if (iVar1 == 0) {
      (**(code **)(param_1[1] + 0x54))(param_1,**(undefined4 **)(param_1[1] + 4));
    }
  }
  return;
}

