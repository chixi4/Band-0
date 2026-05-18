
bool FUN_ram_42011416(uint *param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c [8];
  uint uStack_24;
  
  uVar1 = *param_1 >> 0x11 & 0x1f;
  FUN_ram_42012280(param_3,uVar1,auStack_2c);
  bVar2 = false;
  if (((uStack_24 & 2) == 0) && (((uStack_24 & 1) == 0 || (bVar2 = false, param_4 != -1)))) {
    uVar5 = (uint)(short)*param_1;
    uVar4 = (int)uVar5 >> 8 & 0xf;
    if (((uVar4 == 0) || (bVar2 = false, ((int)param_2 >> uVar4 & 1U) != 0)) &&
       (bVar2 = false, (uVar5 & 9) == 0)) {
      if ((uVar5 & 4) == 0) {
        iVar3 = FUN_ram_4207baf0(uVar1);
      }
      else {
        if ((param_2 & 0x100) == 0) {
          return false;
        }
        iVar3 = (param_2 >> 10 & 1) - (uVar5 >> 1 & 1);
      }
      bVar2 = iVar3 == 0;
    }
  }
  return bVar2;
}

