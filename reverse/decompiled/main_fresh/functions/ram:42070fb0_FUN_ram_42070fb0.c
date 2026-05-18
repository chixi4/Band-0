
undefined4 FUN_ram_42070fb0(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [32];
  uint uStack_24;
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 0xffffb080;
  }
  else {
    uVar1 = 0xffffb080;
    if ((param_2 != (undefined4 *)0x0) && (uVar1 = 0xffffb080, (*param_1 & 0xfffffffd) == 1)) {
      iVar2 = FUN_ram_420685b4(param_2 + 4,1);
      if (iVar2 == 0) {
        FUN_ram_4206d7da(auStack_64,0x44);
        uVar3 = *param_2;
        uVar1 = FUN_ram_420683c4(param_2);
        FUN_ram_4039c11e(auStack_64,uVar3,uVar1);
        uVar3 = param_2[2];
        uVar1 = FUN_ram_420683c4(param_2 + 2);
        FUN_ram_4039c11e(auStack_44,uVar3,uVar1);
        uStack_24 = param_1[0xf] >> 3;
        iVar2 = FUN_ram_420739a0(auStack_64);
        if (iVar2 == 1) {
          return 0;
        }
      }
      uVar1 = 0xffffb380;
    }
  }
  return uVar1;
}

