
undefined4 FUN_ram_4039ed34(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_2c [2];
  undefined1 uStack_2a;
  int *piStack_20;
  undefined2 uStack_18;
  undefined1 uStack_16;
  
  iStack_38 = 0;
  iStack_34 = 0;
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  uStack_2a = 8;
  piStack_20 = &iStack_38;
  uStack_18 = 0x4b;
  uStack_16 = 0x20;
  uVar1 = (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,auStack_2c);
  uVar2 = CONCAT44(iStack_34,iStack_38);
  if ((iStack_34 + 1U == (uint)(iStack_38 == 0)) && (0xfffffffd < iStack_38 - 1U)) {
    uVar1 = 0x106;
  }
  else {
    uVar2 = (*(code *)&SUB_ram_400108c8)();
  }
  *param_2 = uVar2;
  return uVar1;
}

