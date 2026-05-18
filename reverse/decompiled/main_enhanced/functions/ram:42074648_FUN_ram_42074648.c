
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42074648(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ushort *puVar15;
  ushort *apuStack_44 [4];
  
  iVar4 = *(int *)(gp + -0xb4);
  if ((param_1 == (int *)0x0) || (iVar13 = *param_1, iVar13 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe488,&DAT_ram_3c0c4114,0xe30);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar14 = (int *)(iVar4 + 4);
  if ((((*(char *)(iVar4 + 0x415) != '\0') && (*(char *)(iVar4 + 0x35f) == '\0')) &&
      (DAT_ram_3fcc41bd == 0xf)) &&
     (iVar4 = FUN_ram_4039c0e0(iVar4 + 0x93,param_1 + 0xcb,6), iVar4 == 0)) {
    piVar14 = (int *)FUN_ram_420894a2();
  }
  uVar3 = (*(code *)&SUB_ram_40012130)(param_1);
  iVar4 = FUN_ram_420742c0(3);
  iVar5 = FUN_ram_42073a14(3);
  uVar11 = (uint)*(byte *)(iVar13 + 0x13d);
  if (uVar11 < 8) {
    uVar11 = uVar11 + 0x2e & 0xff;
LAB_ram_42074706:
    uVar10 = 0;
  }
  else {
    if (uVar11 == 8) {
      uVar11 = 0x36;
      goto LAB_ram_42074706;
    }
    uVar10 = uVar11 - 6 & 0xffff;
    uVar11 = 0x36;
  }
  uVar1 = 0;
  if (_DAT_ram_3fcc4030 != (ushort *)0x0) {
    uVar1 = (uint)*_DAT_ram_3fcc4030;
  }
  uVar6 = 0;
  if (_DAT_ram_3fcc4044 == (ushort *)0x0) {
    uVar6 = 0;
    if (_DAT_ram_3fcc4038 != (ushort *)0x0) {
      uVar6 = (uint)*_DAT_ram_3fcc4038;
    }
    if (_DAT_ram_3fcc403c == (ushort *)0x0) goto LAB_ram_4207473a;
    uVar12 = (uint)*_DAT_ram_3fcc403c;
  }
  else {
LAB_ram_4207473a:
    uVar12 = 0;
  }
  uVar8 = 0;
  if (_DAT_ram_3fcc4068 != (ushort *)0x0) {
    uVar8 = (uint)*_DAT_ram_3fcc4068;
  }
  uVar9 = 0;
  if (_DAT_ram_3fcc4044 != (ushort *)0x0) {
    uVar9 = (uint)*_DAT_ram_3fcc4044;
  }
  iVar2 = 0;
  if ((_DAT_ram_3fcc4094 != 0) && (*(int *)(_DAT_ram_3fcc4094 + 4) != 0)) {
    iVar2 = *(byte *)(_DAT_ram_3fcc4094 + 8) + 10;
  }
  uVar11 = iVar2 + uVar9 + uVar8 + (uint)(_DAT_ram_3fcc4234 != 0) * 0x20 + iVar5 + iVar4 + uVar10 +
                                   uVar11 + uVar1 + uVar6 + uVar12 & 0xffff;
  if (DAT_ram_3fcc41bd == 0xf) {
    DAT_ram_3fcc2708 = 0x25;
    uVar11 = uVar11 + 0x8f;
  }
  else {
    uVar11 = uVar11 + 0x6a;
  }
  if ((uVar3 & 0x100) == 0) {
    uVar11 = (uVar11 & 0xffff) + 0xb;
  }
  else {
    uVar11 = (uVar11 & 0xffff) + 0xf;
  }
  uVar11 = uVar11 & 0xffff;
  iVar4 = FUN_ram_42079edc(apuStack_44,0x18,uVar11);
  if (iVar4 == 0) {
    FUN_ram_4207a038(1,0x40,2,
                     "AgIAAzIABCYCcv//+VVVf6kyAHFalVVVquVV/QcCLgAHXgEi/5WKAvwE///+VVX/6lVVqpVqpValVVb/9TIABAIAFf6mAWL6r///6VrjAlWVv///qgAJDwIACgIMBAJGAA8yABMy////PAQCXAQJwwEPAgAQBHoEDwIAFwuRAQ8CABABoBEPKAAQBgIACZEBVoAAAAC/HAACAgAb+BMAAY4JAhsAAjIAFAsNAAQCAAwyAAn8B1SAAAAAAioABAIACDIAIfQA8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJ..." /* TRUNCATED STRING LITERAL */
                     ,uVar11);
    return 0;
  }
  *(undefined2 *)(iVar4 + 0x14) = 0x18;
  iVar5 = *(int *)(gp + -0xb4);
  *apuStack_44[0] = uVar3;
  puVar7 = apuStack_44[0] + 2;
  apuStack_44[0][1] = *(ushort *)(iVar5 + 0x9a);
  if (param_2 == 0x20) {
    puVar15 = apuStack_44[0] + 5;
    apuStack_44[0] = puVar7;
    FUN_ram_4039c11e(puVar7,param_1 + 1,6);
    puVar7 = puVar15;
  }
  apuStack_44[0] = puVar7;
  iVar5 = *piVar14;
  *(undefined1 *)apuStack_44[0] = 0;
  *(char *)((int)apuStack_44[0] + 1) = (char)iVar5;
  puVar7 = apuStack_44[0] + 1;
  if (iVar5 != 0) {
    puVar7 = (ushort *)FUN_ram_4039c11e(puVar7,piVar14 + 1,iVar5);
  }
  apuStack_44[0] =
       (ushort *)
       (*(code *)&SUB_ram_40012054)((undefined1 *)((int)puVar7 + iVar5),(int)param_1 + 0x73);
  puVar7 = _DAT_ram_3fcc403c;
  uVar10 = (uint)DAT_ram_3fcc41bd;
  if (uVar10 < 0x11) {
    if (((-0x167b1 >> (uVar10 & 0x1f) & 1U) != 0) &&
       ((uVar10 != 0xf || (*(char *)(*(int *)(gp + -0xb4) + 0x415) == '\0'))))
    goto LAB_ram_420748dc;
  }
  else if (uVar10 != 0x11) goto LAB_ram_420748dc;
  if ((_DAT_ram_3fcc403c != (ushort *)0x0) && (_DAT_ram_3fcc4044 == (ushort *)0x0)) {
    iVar5 = FUN_ram_4039c11e(apuStack_44[0],_DAT_ram_3fcc403c + 1,
                             *(byte *)((int)_DAT_ram_3fcc403c + 3) + 2);
    apuStack_44[0] = (ushort *)(*(byte *)((int)puVar7 + 3) + 2 + iVar5);
  }
LAB_ram_420748dc:
  if ((uVar3 & 0x100) != 0) {
    apuStack_44[0] = (ushort *)FUN_ram_420740fa(apuStack_44[0],param_1);
  }
  apuStack_44[0] = (ushort *)FUN_ram_42073fa4(apuStack_44[0],(int)param_1 + 0x73);
  if ((((*(uint *)(iVar13 + 300) & 0x80000) != 0) && ((param_1[3] & 0xc0U) != 0)) &&
     (iVar5 = (*(code *)&SUB_ram_4001205c)(), iVar5 != 0)) {
    apuStack_44[0] = (ushort *)FUN_ram_4207d256(apuStack_44[0],param_1);
  }
  iVar5 = FUN_ram_420893ba();
  if (iVar5 != 0) {
    apuStack_44[0] = (ushort *)FUN_ram_420745f0(apuStack_44[0],param_1);
  }
  iVar5 = FUN_ram_4207f23c();
  puVar7 = _DAT_ram_3fcc4038;
  if (((iVar5 != 0) && (_DAT_ram_3fcc4038 != (ushort *)0x0)) && (_DAT_ram_3fcc4044 == (ushort *)0x0)
     ) {
    iVar5 = FUN_ram_4039c11e(apuStack_44[0],_DAT_ram_3fcc4038 + 1,
                             *(byte *)((int)_DAT_ram_3fcc4038 + 3) + 2);
    apuStack_44[0] = (ushort *)(iVar5 + *(byte *)((int)puVar7 + 3) + 2);
  }
  if (((DAT_ram_3fcc41bc == '\a') || ((byte)(DAT_ram_3fcc41bd - 0xb) < 2)) &&
     ((_DAT_ram_3fcc4234 != 0 && (*(code **)(_DAT_ram_3fcc4234 + 8) != (code *)0x0)))) {
    iVar5 = (**(code **)(_DAT_ram_3fcc4234 + 8))(apuStack_44[0]);
    apuStack_44[0] = (ushort *)((int)apuStack_44[0] + iVar5);
  }
  if ((DAT_ram_3fcc41bd == 0xf) && (*(char *)(*(int *)(gp + -0xb4) + 0x415) != '\0')) {
    apuStack_44[0] = (ushort *)FUN_ram_420740a0(apuStack_44[0]);
  }
  if (((*(uint *)(iVar13 + 0xa4) & 0x2000) != 0) && ((param_1[3] & 2U) != 0)) {
    iVar5 = FUN_ram_4039c11e(apuStack_44[0],&DAT_ram_3c0fa5ac,9);
    apuStack_44[0] = (ushort *)(iVar5 + 9);
  }
  if (((*(uint *)(iVar13 + 300) & 0x10000000) != 0) && ((param_1[3] & 0xc0U) != 0)) {
    apuStack_44[0] = (ushort *)FUN_ram_4207d294(apuStack_44[0],param_1);
  }
  if (_DAT_ram_3fcc4068 != (ushort *)0x0) {
    apuStack_44[0] = (ushort *)FUN_ram_420739ea(apuStack_44[0]);
  }
  apuStack_44[0] = (ushort *)(*(code *)&SUB_ram_40012160)(apuStack_44[0],&DAT_ram_3fcc4004);
  apuStack_44[0] = (ushort *)FUN_ram_4207414a(apuStack_44[0],param_1);
  if ((_DAT_ram_3fcc4044 != (ushort *)0x0) && (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 2)) {
    apuStack_44[0] = (ushort *)FUN_ram_420739ea();
  }
  if ((_DAT_ram_3fcc4094 != 0) && (*(int *)(_DAT_ram_3fcc4094 + 4) != 0)) {
    apuStack_44[0] =
         (ushort *)
         FUN_ram_4207b3d4(apuStack_44[0],_DAT_ram_3fcc4094 + 1,*(int *)(_DAT_ram_3fcc4094 + 4),
                          *(undefined1 *)(_DAT_ram_3fcc4094 + 8));
  }
  apuStack_44[0] = (ushort *)(*(code *)&SUB_ram_400120bc)(apuStack_44[0],3);
  apuStack_44[0] = (ushort *)FUN_ram_4207423e(apuStack_44[0],3);
  uVar10 = (int)apuStack_44[0] -
           (*(int *)(*(int *)(iVar4 + 4) + 4) + (uint)*(ushort *)(iVar4 + 0x14));
  *(short *)(iVar4 + 0x16) = (short)(uVar10 * 0x10000 >> 0x10);
  if ((uVar10 & 0xffff) <= uVar11) {
    return iVar4;
  }
  FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe490,&DAT_ram_3c0c4114,0xf2c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

