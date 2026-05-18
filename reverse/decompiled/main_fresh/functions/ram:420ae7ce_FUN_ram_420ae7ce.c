
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ae7ce(int param_1,undefined2 *param_2)

{
  code *pcVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 *puVar4;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined1 auStack_50 [12];
  ushort local_44 [10];
  
  uStack_58 = 0x100;
  uStack_56 = 0x100;
  uStack_54 = 0x1000100;
  FUN_ram_4039c11e(local_44,0x3fcb8718,0x12);
  (*(code *)&SUB_ram_400124d0)(0xe);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x78))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x88))(0);
  (*(code *)&SUB_ram_40012430)(1);
  (*(code *)&SUB_ram_4001242c)(1);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x94))(&uStack_58);
  if (param_1 != 0) {
    pcVar1 = *(code **)(_DAT_ram_3fcc4c78 + 0x70);
    uVar3 = (**(code **)(_DAT_ram_3fcc4c78 + 0x74))(1,1);
    (*pcVar1)(1,1,uVar3 | 2);
    (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x67,1,3,2,2,0,*(code **)(_DAT_ram_3fcc4c78 + 0x58));
  }
  uVar2 = 0;
  puVar4 = param_2;
  do {
    if (uVar2 < 9) {
      (**(code **)(_DAT_ram_3fcc4c78 + 0x80))((uint)local_44[uVar2] << 0xc);
      if (2 < (uVar2 & 0xff)) {
        uStack_58 = param_2[4];
        uStack_56 = param_2[5];
      }
      FUN_ram_420ae4a8(param_1,1,0x800,&uStack_58,auStack_50);
      *puVar4 = uStack_58;
      puVar4[1] = uStack_56;
    }
    else {
      *puVar4 = 0x100;
      puVar4[1] = 0x100;
    }
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 2;
  } while (uVar2 != 0xd);
  if (param_1 != 0) {
    (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x67,1,3,2,2,1,*(code **)(_DAT_ram_3fcc4c78 + 0x58));
  }
  (*(code *)&SUB_ram_40012430)(0);
  (*(code *)&SUB_ram_4001242c)(0);
  (**(code **)(_DAT_ram_3fcc4c78 + 0x84))();
  (**(code **)(_DAT_ram_3fcc4c78 + 0x7c))();
  return;
}

