
void FUN_ram_42031302(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 auStack_3f [7];
  undefined1 uStack_38;
  undefined1 auStack_37 [7];
  undefined1 auStack_30 [20];
  
  iVar2 = FUN_ram_4202d598(param_2,0x10);
  *param_3 = iVar2;
  if (iVar2 != 0) {
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    *(undefined1 *)(param_3 + 1) = 8;
    return;
  }
  uVar8 = *(undefined4 *)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420279b4(param_1,10,0xffffffff,0);
  if (iVar2 == 0) {
    *param_3 = 5;
    bVar6 = *(byte *)(param_3 + 5) | 0x10;
  }
  else {
    iVar7 = iVar2 + 0x1e;
    if ((*(byte *)(iVar2 + 8) & 1) == 0) {
      iVar9 = iVar2 + 0x11;
      if (*(char *)(iVar2 + 0xc) == '\x02') {
        cVar1 = *(char *)(iVar2 + 0x12);
        goto LAB_ram_420313a4;
      }
    }
    else {
      iVar9 = iVar2 + 0x18;
      if (*(char *)(iVar2 + 0xc) == '\x02') {
        cVar1 = *(char *)(iVar2 + 0x19);
LAB_ram_420313a4:
        if ((cVar1 == '\0') || (*(int *)(iVar2 + 0x184) == 0)) {
          (*(code *)&SUB_ram_40010488)(iVar7,0,0x10);
        }
        else {
          FUN_ram_4039c11e(iVar7);
        }
      }
    }
    FUN_ram_42030a48(*(undefined2 *)(iVar2 + 10),&uStack_40,&uStack_38);
    FUN_ram_4202d766(iVar7,0x10);
    uVar3 = FUN_ram_420283c8(iVar2);
    uVar4 = FUN_ram_4202829c(iVar2);
    iVar7 = FUN_ram_4202b3c8(iVar2 + 0x152,uVar3,uVar4,iVar7,iVar9,uStack_38,auStack_37,uStack_40,
                             auStack_3f,auStack_30);
    *param_3 = iVar7;
    if (iVar7 == 0) {
      iVar7 = FUN_ram_4039c0e0(uVar8,auStack_30,0x10);
      if (iVar7 == 0) {
        iVar7 = FUN_ram_42030b16(iVar2,&uStack_41);
        if (iVar7 == 0) {
          uVar5 = FUN_ram_42028026(uStack_41);
          if (uVar5 == *(byte *)(iVar2 + 0xd)) {
            *(byte *)(iVar2 + 8) = *(byte *)(iVar2 + 8) | 4;
          }
          iVar7 = FUN_ram_4202805a(iVar2);
          if (iVar7 == 0) goto LAB_ram_42031372;
          if ((*(byte *)(iVar2 + 8) & 1) != 0) {
            *(undefined1 *)(iVar2 + 0xd) = 5;
          }
          bVar6 = *(byte *)(param_3 + 5) | 1;
          goto LAB_ram_4203136e;
        }
        *param_3 = 3;
        goto LAB_ram_42031406;
      }
      *(undefined1 *)(param_3 + 1) = 0xb;
      *param_3 = 0x40b;
    }
    else {
LAB_ram_42031406:
      *(undefined1 *)(param_3 + 1) = 8;
    }
    bVar6 = *(byte *)(param_3 + 5) | 2;
  }
LAB_ram_4203136e:
  *(byte *)(param_3 + 5) = bVar6;
LAB_ram_42031372:
  thunk_FUN_ram_4202b7f6();
  return;
}

