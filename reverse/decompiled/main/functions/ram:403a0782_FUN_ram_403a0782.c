
undefined4 FUN_ram_403a0782(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint local_30;
  undefined1 auStack_2c [2];
  undefined1 uStack_2a;
  undefined1 *puStack_20;
  undefined2 uStack_18;
  
  local_30 = 0;
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  uStack_2a = 3;
  uStack_18 = 0x9f;
  puStack_20 = (undefined1 *)&local_30;
  (**(code **)(*param_1 + 4))(param_1,auStack_2c);
  uVar1 = 0x108;
  if ((local_30 != 0xffffff) && (local_30 != 0)) {
    *param_2 = (local_30 & 0xff) << 0x10 | local_30 >> 0x10 | local_30 & 0xff00;
    uVar1 = 0;
  }
  return uVar1;
}

