
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039f200(void)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
LAB_ram_4039f22c:
  iVar3 = (*(code *)&SUB_ram_40011be0)();
  if (iVar3 == 0) {
    return;
  }
  (*(code *)&SUB_ram_40011cd8)();
  puVar2 = *(uint **)(iVar3 + 0x10);
  *(uint **)(*(int *)(iVar3 + 4) + 4) = puVar2 + 0xc;
  if ((**(uint **)(iVar3 + 0x24) & 0x10) != 0) {
    iVar4 = FUN_ram_4039f0c8(iVar3,puVar2);
    if ((iVar4 != 0) || (iVar4 = FUN_ram_4039de5e(iVar3), iVar4 != 0)) goto LAB_ram_4039f272;
    goto LAB_ram_4039f288;
  }
  iVar4 = FUN_ram_4039f0c8(iVar3,puVar2);
  if (iVar4 == 0) goto LAB_ram_4039f27e;
  goto LAB_ram_4039f272;
LAB_ram_4039f27e:
  iVar3 = FUN_ram_4039da8e(iVar3);
  if (iVar3 != 0) {
LAB_ram_4039f288:
    if ((*puVar2 & 0x10000000) == 0) {
      if (((*puVar2 & 0x20000000) != 0) && (*(code **)(_DAT_ram_3fcdfdec + 0x3a4) != (code *)0x0)) {
        (**(code **)(_DAT_ram_3fcdfdec + 0x3a4))(iVar3,(int)**(char **)(iVar3 + 0x10),0);
        goto LAB_ram_4039f22c;
      }
    }
    else {
      cVar1 = *(char *)((int)puVar2 + 0x2f);
      if (((cVar1 == '\0') || (cVar1 == -0xb)) &&
         (*(code **)(_DAT_ram_3fcdfdec + 0x3a0) != (code *)0x0)) {
        if (cVar1 != -0xb) {
          (**(code **)(_DAT_ram_3fcdfdec + 0x3a0))(iVar3,(int)**(char **)(iVar3 + 0x10),0);
          goto LAB_ram_4039f22c;
        }
        if (_DAT_ram_3fcdfd4c == (code *)0x0) {
          FUN_ram_4207a038(6,0x20,1,&DAT_ram_3c0ff614);
        }
        else {
          (*_DAT_ram_3fcdfd4c)(~puVar2[2] >> 0x1f);
        }
      }
    }
LAB_ram_4039f272:
    (*(code *)&SUB_ram_40011c1c)(iVar3);
  }
  goto LAB_ram_4039f22c;
}

