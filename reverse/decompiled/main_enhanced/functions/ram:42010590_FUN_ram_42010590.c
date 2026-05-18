
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010590(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_ram_4204a4ac();
  thunk_FUN_ram_4204b54a();
  FUN_ram_420106e8();
  FUN_ram_420108ae();
  _DAT_ram_3fcc4e08 = FUN_ram_40394860();
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    (*(code *)&SUB_ram_400107e4)(0,iVar3,0);
    iVar3 = iVar1;
  } while (iVar1 != 0x2b);
  FUN_ram_40390938();
  uVar2 = FUN_ram_4039097c();
  (*(code *)&SUB_ram_40010074)(0);
  iVar3 = (*(code *)&SUB_ram_400109f0)(uVar2 + 0x1c1e3dff,uVar2 + 0x1c1e3dff < uVar2,0x1c1e3e00,0);
  if (iVar3 - 1U < 0x100) {
    uVar2 = (uVar2 << 4) / (uint)(iVar3 * 0x1c200);
    _DAT_ram_60000014 =
         _DAT_ram_60000014 & 0xff0ff000 | (uVar2 & 0xffff) >> 4 | (uVar2 & 0xf) << 0x14;
    _DAT_ram_60000078 = (iVar3 - 1U & 0xff) << 0xc | _DAT_ram_60000078 & 0xfff00fff;
  }
  if (*param_1 == 5) {
    FUN_ram_42011bb8();
  }
  FUN_ram_42010a0e();
  if (DAT_ram_3c0a8000 != -0x17) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  return;
}

