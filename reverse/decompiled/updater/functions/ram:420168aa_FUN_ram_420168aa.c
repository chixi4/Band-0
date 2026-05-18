
int FUN_ram_420168aa(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uStack_34;
  
  iVar7 = 0x102;
  if (param_1 != 0) {
    (*(code *)&SUB_ram_40010488)(param_1,0,600);
    iVar7 = FUN_ram_4201d67a(0x3c070d3c,0,&uStack_34);
    if (iVar7 == 0x1102) {
      uVar3 = FUN_ram_40398d1c();
      FUN_ram_40398c14(2,0x3c070cd4,0x3c070d40,uVar3,0x3c070cd4,0x3c070d3c);
    }
    else if (iVar7 == 0) {
      uVar2 = FUN_ram_42016834(uStack_34,0x3c070da0,param_1,0x100);
      *(undefined1 *)(param_1 + 0x254) = uVar2;
      FUN_ram_42016834(uStack_34,0x3c0732b0,param_1 + 0x100,0x20);
      puVar6 = (undefined1 *)(param_1 + 0x141);
      *(undefined1 *)(param_1 + 0x24c) = 0;
      cVar1 = '\0';
      do {
        uVar3 = 0x3c070d04;
        if ((cVar1 != '\x01') && (uVar3 = 0x3c070d0c, cVar1 != '\x02')) {
          uVar3 = 0x3c07274c;
        }
        uVar2 = FUN_ram_42016834(uStack_34,uVar3,puVar6 + -0x21,0x21);
        puVar6[0x41] = uVar2;
        uVar3 = 0x3c070d20;
        if (cVar1 != '\x01') {
          if (cVar1 == '\x02') {
            uVar3 = 0x3c070d28;
          }
          else {
            uVar3 = 0x3c070d14;
          }
        }
        uVar2 = FUN_ram_42016834(uStack_34,uVar3,puVar6,0x41);
        puVar6[0x42] = uVar2;
        if (puVar6[0x41] == '\0') {
          *puVar6 = 0;
          puVar6[0x42] = 0;
        }
        else {
          *(char *)(param_1 + 0x24c) = *(char *)(param_1 + 0x24c) + '\x01';
        }
        cVar1 = cVar1 + '\x01';
        puVar6 = puVar6 + 100;
      } while (cVar1 != '\x03');
      iVar5 = FUN_ram_4201d9c2(uStack_34,0x3c070da4,param_1 + 0x250);
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x250) = 0;
      }
      FUN_ram_4201db22(uStack_34);
      uVar3 = FUN_ram_40398d1c();
      FUN_ram_40398c14(3,0x3c070cd4,0x3c070db0,uVar3,0x3c070cd4,*(undefined4 *)(param_1 + 0x250),
                       *(undefined1 *)(param_1 + 0x254),*(undefined1 *)(param_1 + 0x24c));
      if (*(char *)(param_1 + 0x254) != '\0') {
        uVar3 = FUN_ram_40398d1c();
        FUN_ram_40398c14(3,0x3c070cd4,0x3c070dec,uVar3,0x3c070cd4,param_1);
      }
      if (*(char *)(param_1 + 0x100) != '\0') {
        uVar3 = FUN_ram_40398d1c();
        FUN_ram_40398c14(3,0x3c070cd4,0x3c070e08,uVar3,0x3c070cd4,param_1 + 0x100);
      }
      param_1 = param_1 + 0x120;
      iVar5 = 0;
      do {
        if (*(char *)(param_1 + 0x62) != '\0') {
          uVar3 = FUN_ram_40398d1c();
          if (*(char *)(param_1 + 99) == '\0') {
            uVar4 = 0x3c070d34;
          }
          else {
            uVar4 = 0x3c070d30;
          }
          FUN_ram_40398c14(3,0x3c070cd4,0x3c070e24,uVar3,0x3c070cd4,iVar5,param_1,uVar4);
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 100;
      } while (iVar5 != 3);
    }
    else {
      uVar3 = FUN_ram_40398d1c();
      uVar4 = FUN_ram_4201ae60(iVar7);
      FUN_ram_40398c14(1,0x3c070cd4,0x3c070d78,uVar3,0x3c070cd4,0x3c070d3c,uVar4);
    }
  }
  return iVar7;
}

