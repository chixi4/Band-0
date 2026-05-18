
void FUN_ram_4039384e(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iStack_38;
  int aiStack_34 [3];
  
  iVar5 = *(int *)(param_1 + 0x9c);
  iStack_38 = 0;
  iVar2 = FUN_ram_4039ad3a(param_1 + 0x20);
  if ((iVar2 == 0) && (iVar2 = FUN_ram_4039ad44(param_1 + 0x20,0x4000), iVar2 == 0))
  goto LAB_ram_40393882;
  iVar2 = FUN_ram_4039299c(*(undefined4 *)(iVar5 + 0x4c));
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x98) == 6) goto LAB_ram_40393882;
    iVar2 = *(int *)(param_1 + 0x98) * 4;
    if (*(char *)(param_1 + 0xa4) == '\0') {
      FUN_ram_40393370(param_1);
      iVar2 = *(int *)(iVar2 + param_1 + 4);
      if ((*(uint *)(iVar2 + 0x2c) & 0x100) == 0) {
        iVar3 = param_1 + 0x58;
LAB_ram_4039390a:
        FUN_ram_40397350(*(undefined4 *)(iVar2 + 8),iVar3,&iStack_38,0);
      }
    }
    else {
      if ((*(int *)(param_1 + 0x88) == 0) && (*(short *)(param_1 + 0x96) != 0))
      goto LAB_ram_40393882;
      thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x90));
      FUN_ram_40396966();
      *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + (uint)*(ushort *)(param_1 + 0x94);
      *(uint *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + (uint)*(ushort *)(param_1 + 0x96);
      FUN_ram_40396994();
      pcVar4 = *(code **)(*(int *)(*(int *)(param_1 + 0x98) * 4 + param_1 + 4) + 0x38);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(*(undefined4 *)(param_1 + 0x8c));
      }
      iVar2 = *(int *)(iVar2 + param_1 + 4);
      *(undefined4 *)(param_1 + 0x98) = 6;
      if ((*(uint *)(iVar2 + 0x2c) & 0x100) == 0) {
        iVar3 = param_1 + 0x84;
        goto LAB_ram_4039390a;
      }
    }
    FUN_ram_40391b7a(*(undefined4 *)(iVar5 + 0x50));
  }
  if (*(int *)(param_1 + 0x98) == 6) {
    iVar2 = 0;
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x4c);
    do {
      aiStack_34[0] = FUN_ram_40392998(uVar7);
      if ((aiStack_34[0] == 0) && (iVar5 = FUN_ram_40392ade(uVar7,aiStack_34), iVar5 != 0)) {
LAB_ram_403939c6:
        puVar1 = (undefined4 *)0x0;
        if (iVar2 == 0) goto LAB_ram_40393970;
LAB_ram_403939cc:
        if (*(char *)(param_1 + 0xa4) == '\0') {
          FUN_ram_40393746(puVar1,param_1 + 0x58);
        }
        else {
          if (puVar1 == (undefined4 *)0x0) break;
          *(undefined4 *)(puVar1[0x1d] + 0x98) = *puVar1;
          FUN_ram_403933b0(puVar1,0);
          FUN_ram_4039af38(puVar1[0x1d] + 0x20,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x30));
          iVar5 = puVar1[0x1d];
          iVar8 = *(int *)(param_1 + 0x88);
          iVar3 = *(int *)(param_1 + 0x84);
          puVar6 = *(undefined4 **)(iVar5 + 0xa0);
          FUN_ram_4039addc(iVar5 + 0x20,0x4000);
          if (iVar8 != 0) {
            FUN_ram_40394922(puVar6[1]);
            FUN_ram_4039acc8(*(undefined4 *)(iVar5 + 0x20));
            FUN_ram_4039496a(puVar6[1],iVar8);
          }
          if (iVar3 != 0) {
            FUN_ram_40394922(*puVar6);
            FUN_ram_4039acf2(*(undefined4 *)(iVar5 + 0x20));
            FUN_ram_4039496a(*puVar6,iVar3);
          }
          if ((code *)puVar1[0xd] != (code *)0x0) {
            (*(code *)puVar1[0xd])(*(undefined4 *)(param_1 + 0x8c));
          }
          FUN_ram_4039ad18(puVar1[0x1d] + 0x20);
        }
      }
      else {
        if (aiStack_34[0] == 0) break;
        iVar5 = FUN_ram_40392afc();
        if (iVar5 == 0) goto LAB_ram_403939c6;
        iVar2 = FUN_ram_4039285c(aiStack_34[0]);
        puVar1 = *(undefined4 **)(iVar2 * 4 + param_1 + 4);
        iVar2 = 0x84;
        if (*(char *)(param_1 + 0xa4) == '\0') {
          iVar2 = 0x58;
        }
        iVar2 = FUN_ram_40397756(puVar1[1],param_1 + iVar2,&iStack_38);
        if (iVar2 != 0) goto LAB_ram_403939cc;
        FUN_ram_40392a84(aiStack_34[0]);
LAB_ram_40393970:
        iVar2 = 0;
      }
      iVar5 = FUN_ram_403929c0(uVar7,iVar2 != 0,&iStack_38);
      if (iVar5 != 0) {
        if (iStack_38 != 0) {
          FUN_ram_403969ca();
        }
        return;
      }
    } while( true );
  }
LAB_ram_40393882:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

