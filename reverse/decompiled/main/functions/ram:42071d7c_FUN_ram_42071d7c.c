
int FUN_ram_42071d7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,uint *param_7,int param_8,undefined4 param_9,
                    undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puStack_7c;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [72];
  undefined1 auStack_20 [4];
  
  if (param_8 == 0) {
    iVar2 = -0x4f80;
  }
  else {
    FUN_ram_4206806e(auStack_78);
    FUN_ram_4206806e(auStack_70);
    iVar2 = FUN_ram_42071ae0(param_1,auStack_78,auStack_70,param_1 + 0x60,param_3,param_4,param_8,
                             param_9,param_8,param_9,param_10);
    if (iVar2 == 0) {
      (*(code *)&SUB_ram_40010488)(auStack_68,0,0x48);
      puStack_7c = auStack_20;
      iVar3 = FUN_ram_4206ee04(&puStack_7c,auStack_68,auStack_70);
      iVar2 = iVar3;
      if ((-1 < iVar3) && (iVar2 = FUN_ram_4206ee04(&puStack_7c,auStack_68,auStack_78), -1 < iVar2))
      {
        iVar3 = iVar3 + iVar2;
        iVar4 = FUN_ram_4206ed50(&puStack_7c,auStack_68,iVar3);
        iVar2 = iVar4;
        if ((-1 < iVar4) && (iVar2 = FUN_ram_4206ed9c(&puStack_7c,auStack_68,0x30), -1 < iVar2)) {
          uVar1 = iVar2 + iVar4 + iVar3;
          iVar2 = -0x4f00;
          if (uVar1 <= param_6) {
            FUN_ram_4039c11e(param_5,puStack_7c,uVar1);
            iVar2 = 0;
            *param_7 = uVar1;
          }
        }
      }
    }
    FUN_ram_42068078(auStack_78);
    FUN_ram_42068078(auStack_70);
  }
  return iVar2;
}

