
undefined4 FUN_ram_4202df5a(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [32];
  uint uStack_24;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0xffffb080;
  }
  else {
    if ((*param_1 & 0xfffffffd) != 1) {
      uVar1 = FUN_ram_4203029c();
      return uVar1;
    }
    iVar2 = FUN_ram_42024dea(param_2 + 4,1);
    if (iVar2 == 0) {
      FUN_ram_420293a6(auStack_64,0x44);
      uVar3 = *param_2;
      uVar1 = FUN_ram_42024bb6(param_2);
      FUN_ram_40399daa(auStack_64,uVar3,uVar1);
      uVar3 = param_2[2];
      uVar1 = FUN_ram_42024bb6(param_2 + 2);
      FUN_ram_40399daa(auStack_44,uVar3,uVar1);
      uStack_24 = param_1[0xf] >> 3;
      iVar2 = FUN_ram_42031aea(auStack_64);
      if (iVar2 == 1) {
        return 0;
      }
    }
    uVar1 = 0xffffb380;
  }
  return uVar1;
}

