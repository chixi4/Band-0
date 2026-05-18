
int FUN_ram_42028c94(int param_1)

{
  undefined2 uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined1 uStack_b4;
  undefined1 auStack_b3 [6];
  undefined1 uStack_ad;
  int aiStack_ac [4];
  undefined1 *puStack_9c;
  byte bStack_98;
  undefined1 auStack_94 [7];
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined1 auStack_78 [12];
  short sStack_6c;
  int iStack_68;
  int iStack_64;
  
  uVar1 = *(undefined2 *)(param_1 + 1);
  (*(code *)&SUB_ram_40010488)(aiStack_ac,0,0x18);
  thunk_FUN_ram_4202b7dc();
  iVar5 = FUN_ram_420279b4(uVar1,0xff,0,0);
  if (iVar5 == 0) {
    iVar5 = FUN_ram_4202710e();
    if (iVar5 != 0) {
      *(undefined2 *)(iVar5 + 10) = uVar1;
      *(undefined1 *)(iVar5 + 0xd) = 4;
      FUN_ram_42026fba();
      goto LAB_ram_42028d10;
    }
    aiStack_ac[0] = 6;
  }
  else {
    if (*(char *)(iVar5 + 0xd) != '\b') {
      if (*(char *)(iVar5 + 0xd) != '\x03') {
        FUN_ram_42027142(uVar1);
        thunk_FUN_ram_4202b7f6();
        return aiStack_ac[0];
      }
      bStack_98 = bStack_98 | 1;
      thunk_FUN_ram_4202b7f6();
      bVar2 = false;
      goto LAB_ram_42028d4a;
    }
    *(undefined1 *)(iVar5 + 0xd) = 4;
LAB_ram_42028d10:
    bStack_98 = bStack_98 | 1;
  }
  uVar6 = thunk_FUN_ram_420365de(uVar1);
  FUN_ram_42036658(uVar6,auStack_94);
  uStack_bc = uStack_8c;
  uStack_b8 = uStack_88;
  thunk_FUN_ram_4202b7f6();
  bVar2 = true;
  if (iVar5 == 0) {
    return aiStack_ac[0];
  }
LAB_ram_42028d4a:
  if ((aiStack_ac[0] == 0) && (bVar2)) {
    sVar3 = *(short *)(param_1 + 0xb);
    iVar5 = *(int *)(param_1 + 3);
    iVar4 = *(int *)(param_1 + 7);
    uStack_ad = 0;
    uStack_b4 = uStack_8d;
    FUN_ram_4039c11e(auStack_b3,&uStack_bc,6);
    iVar7 = FUN_ram_4202ce76(&uStack_b4,auStack_78);
    if ((iVar7 != 0) ||
       (((sStack_6c != sVar3 || (iStack_68 != iVar5)) ||
        (puStack_9c = auStack_78, iStack_64 != iVar4)))) {
      puStack_9c = (undefined1 *)0x0;
    }
  }
  FUN_ram_42028608(uVar1,aiStack_ac,1);
  return 0;
}

