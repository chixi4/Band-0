
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42022418(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_80;
  undefined *puStack_7c;
  char *pcStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined2 uStack_54;
  undefined2 uStack_4e;
  undefined1 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  
  if (_DAT_ram_3fcc5188 == 0) {
    FUN_ram_4039c11e(auStack_70,
                     "AAQfASEHBC8AA70GBC8AB6QGBR8PpAYELwefQAYEHwekBgUvA/wyAAQvAfgZAAQvAPAZAAUfYBkABQ/WBoIfAHECBQ/WBv9RD4cPAQF3AQ8ZAAEvA5/SDwgh/vhfAgoCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKv+ACgEPAgCjUAAAAAAA"
                     ,0x60);
    uStack_54 = 3;
    uStack_4a = 3;
    uStack_48 = 3;
    uStack_6c = 0xe00;
    uStack_4e = 2;
    uStack_4c = 1;
    FUN_ram_420b611e(&DAT_ram_3c0c196c);
    FUN_ram_420b611e(&DAT_ram_3c0c1978,1);
    FUN_ram_420b611e("objective before assigning resources today.",1);
    iVar1 = FUN_ram_42064fde(&DAT_ram_3fcc5188,auStack_70);
    if (iVar1 != 0) {
      _DAT_ram_3fcc5188 = 0;
      return iVar1;
    }
    iVar1 = FUN_ram_42021f96(&local_80);
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_400106ac)
                (gp + -0x484,0x28,0x3c0a8ef0,local_80 & 0xff,local_80._1_1_,local_80._2_1_,
                 local_80._3_1_);
    }
    FUN_ram_420666cc(_DAT_ram_3fcc5188,6,0x42012388);
    if (param_1 != 0) {
      uVar2 = FUN_ram_420b52ca();
      uVar3 = FUN_ram_42010f0c(0x1000);
      if ((0x1193 < uVar2) && (0xdab < uVar3)) {
        local_80 = 1;
        puStack_7c = &DAT_ram_3c0c381c;
        pcStack_78 = "fore assigning resources today.";
        uStack_74 = 0;
        _DAT_ram_3fcc5184 = FUN_ram_42046514(&local_80);
      }
    }
  }
  return 0;
}

