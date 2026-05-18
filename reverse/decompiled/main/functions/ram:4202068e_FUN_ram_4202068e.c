
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202068e(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_ram_4202064c();
  uVar1 = param_3;
  if (param_2 <= param_3) {
    uVar1 = param_2;
    param_2 = param_3;
  }
  uVar3 = param_2 & 0xff;
  if (199 < param_2) {
    uVar3 = 199;
  }
  FUN_ram_420201a0(param_1,0x3fcbc7d4);
  uVar2 = uVar1;
  uVar4 = uVar3;
  if ((uVar1 <= uVar3) && (uVar2 = uVar3, uVar4 = uVar1, uVar1 == uVar3)) {
    if (param_2 < 199) {
      uVar2 = uVar1 + 1 & 0xff;
      uVar4 = uVar3;
    }
    else {
      uVar2 = 199;
      uVar4 = 0xc6;
    }
  }
  FUN_ram_4201fe48(0x90);
  FUN_ram_4201fe50(0);
  FUN_ram_4201fe50(199);
  FUN_ram_4201fe50(uVar4);
  FUN_ram_4201fe50(uVar2);
  FUN_ram_4201fe50(1);
  FUN_ram_4201fe48(0x91);
  FUN_ram_4202009e(0x3fcbc7d4,_DAT_ram_3fcc5148,0,0x18,uVar4,uVar2);
  FUN_ram_4202034e();
  FUN_ram_4201fe48(0x92);
  FUN_ram_4201ff52(0x3fcbc7d4,0,0x18,uVar4,uVar2);
  return;
}

