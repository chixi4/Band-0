
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42048f32(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_c0;
  undefined4 uStack_bc;
  short sStack_b8;
  byte bStack_b6;
  byte bStack_b5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [16];
  uint uStack_9c;
  undefined1 auStack_98 [100];
  
  FUN_ram_403917e0(0x3fcc51d8);
  iVar2 = 0;
  if (_DAT_ram_3fcc51dc == (undefined4 *)0x0) {
    (*(code *)&SUB_ram_40012be4)(auStack_98);
    iVar2 = FUN_ram_4204a320(0x8000,0x1000,0,&local_c0,&uStack_bc);
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)0x0;
      puVar1 = (undefined4 *)0x0;
      for (iVar6 = local_c0; local_c0 + 0x1000 != iVar6; iVar6 = iVar6 + 0x20) {
        FUN_ram_4039c11e(&sStack_b8,iVar6,0x20);
        if (sStack_b8 == -0x1415) {
          if (iVar6 != 0) {
            (*(code *)&SUB_ram_40012bec)(auStack_98,&sStack_b8);
            iVar6 = FUN_ram_4039c0e0(&sStack_b8,iVar6 + 0x10);
            puVar1 = puVar5;
            if (iVar6 == 0) goto LAB_ram_4204908c;
            iVar2 = 0x103;
            goto LAB_ram_42049054;
          }
          break;
        }
        if (sStack_b8 != 0x50aa) break;
        (*(code *)&SUB_ram_40012be8)(auStack_98,&sStack_b8,0x20);
        puVar4 = (undefined4 *)FUN_ram_4039c08e(1,0x34);
        if (puVar4 == (undefined4 *)0x0) break;
        *puVar4 = _DAT_ram_3fcc51f0;
        puVar4[1] = (uint)bStack_b6;
        puVar4[2] = (uint)bStack_b5;
        puVar4[3] = uStack_b4;
        puVar4[4] = uStack_b0;
        puVar4[5] = 0x1000;
        uVar3 = FUN_ram_42048ee4(uStack_9c & 1);
        *(undefined1 *)((int)puVar4 + 0x29) = uVar3;
        *(undefined1 *)(puVar4 + 0xb) = 0;
        *(byte *)((int)puVar4 + 0x2a) = (byte)(uStack_9c >> 1) & 1;
        FUN_ram_4039c61e(puVar4 + 6,auStack_ac,0x10);
        if (puVar1 == (undefined4 *)0x0) {
          puVar4[0xc] = puVar5;
          puVar5 = puVar4;
        }
        else {
          puVar4[0xc] = puVar1[0xc];
          puVar1[0xc] = puVar4;
        }
        puVar1 = puVar4;
      }
      iVar2 = 0x105;
LAB_ram_42049054:
      while (puVar1 = _DAT_ram_3fcc51dc, puVar5 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar5[0xc];
        thunk_FUN_ram_40390634(puVar5);
        puVar5 = puVar1;
      }
LAB_ram_4204908c:
      _DAT_ram_3fcc51dc = puVar1;
      FUN_ram_4204a3e0(uStack_bc);
    }
  }
  FUN_ram_403917f8(0x3fcc51d8);
  return iVar2;
}

