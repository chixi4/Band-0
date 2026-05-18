
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010590(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  FUN_ram_4204a4ac();
  thunk_FUN_ram_4204b54a();
  FUN_ram_420106e8();
  FUN_ram_420108ae();
  _DAT_ram_3fcc4e08 = FUN_ram_40394860();
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 1;
    (*(code *)&SUB_ram_400107e4)(0,iVar4,0);
    iVar4 = iVar2;
  } while (iVar2 != 0x2b);
  FUN_ram_40390938();
  uVar3 = FUN_ram_4039097c();
  (*(code *)&SUB_ram_40010074)(0);
  iVar4 = (*(code *)&SUB_ram_400109f0)(uVar3 + 0x1c1e3dff,uVar3 + 0x1c1e3dff < uVar3,0x1c1e3e00,0);
  if (iVar4 - 1U < 0x100) {
    uVar3 = (uVar3 << 4) / (uint)(iVar4 * 0x1c200);
    _DAT_ram_60000014 =
         _DAT_ram_60000014 & 0xff0ff000 | (uVar3 & 0xffff) >> 4 | (uVar3 & 0xf) << 0x14;
    _DAT_ram_60000078 = (iVar4 - 1U & 0xff) << 0xc | _DAT_ram_60000078 & 0xfff00fff;
  }
  if (*param_1 == 5) {
    FUN_ram_42011bb8();
  }
  FUN_ram_42010a0e();
  uVar1 = _DAT_ram_3fcc4e08;
  if (DAT_ram_3c0a8000 != -0x17) {
    FUN_ram_4039bf1e();
    uVar1 = _DAT_ram_3fcc4e08;
  }
  _DAT_ram_3fcc4e0c = (undefined4)((ulonglong)uVar1 >> 0x20);
  _DAT_ram_3fcc4e08 = (undefined4)uVar1;
  return;
}

