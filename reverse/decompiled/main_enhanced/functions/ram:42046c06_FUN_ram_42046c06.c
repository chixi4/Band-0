
void FUN_ram_42046c06(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = FUN_ram_42046bd8(param_2);
  uVar9 = 0;
  do {
    uVar8 = 0;
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      iVar5 = FUN_ram_420468b8(param_1,uVar3,uVar9);
      if (iVar5 == 0) {
        if (param_3 == 4) {
          iVar5 = (int)uVar3 / 3;
          iVar7 = (int)uVar9 >> 1;
LAB_ram_42046cd8:
          uVar2 = iVar5 + iVar7;
LAB_ram_42046cee:
          uVar2 = ~uVar2;
LAB_ram_42046c74:
          uVar2 = uVar2 & 1;
        }
        else {
          if (param_3 < 5) {
            if (param_3 == 2) {
              iVar5 = (int)uVar3 % 3;
            }
            else {
              if (param_3 != 3) {
                uVar2 = uVar9 & 1 ^ 1;
                if (param_3 != 1) {
                  uVar2 = (uVar9 & 1 ^ 1) + uVar3;
                  goto LAB_ram_42046c74;
                }
                goto LAB_ram_42046c92;
              }
              iVar5 = (int)(uVar3 + uVar9) % 3;
            }
          }
          else {
            if (param_3 == 6) {
              uVar2 = (int)uVar8 % 3 + uVar8;
              goto LAB_ram_42046cee;
            }
            if (param_3 == 7) {
              iVar5 = (int)uVar8 % 3;
              iVar7 = uVar3 + uVar9;
              goto LAB_ram_42046cd8;
            }
            iVar5 = (uVar8 & 1) + (int)uVar8 % 3;
          }
          uVar2 = (uint)(iVar5 == 0);
        }
LAB_ram_42046c92:
        uVar6 = FUN_ram_420468b8(param_2,uVar3,uVar9);
        FUN_ram_420468fe(param_2,uVar3,uVar9,(uVar2 ^ uVar6) & 0xff);
      }
      uVar8 = uVar8 + uVar9;
      uVar2 = uVar3 + 1;
    } while (uVar4 != uVar3 + 1);
    bVar1 = uVar9 == uVar3;
    uVar9 = uVar9 + 1;
    if (bVar1) {
      return;
    }
  } while( true );
}

