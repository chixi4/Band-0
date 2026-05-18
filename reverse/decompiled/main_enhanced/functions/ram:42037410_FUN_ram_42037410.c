
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42037410(int param_1)

{
  int in_a5;
  int unaff_s3;
  
  if (*(int *)(in_a5 + 0x3c) == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x117,&DAT_ram_3c0f5794,0,0,0,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(0,1);
  (**(code **)(_DAT_ram_3fcdfecc + 0xb54))(0xb003,*(undefined2 *)(param_1 + 0x10),param_1);
  (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(0,0);
                    /* WARNING: Could not recover jumptable at 0x42037472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(unaff_s3 + -0x128) + 0x3c))
            (param_1,*(undefined4 *)(*(int *)(unaff_s3 + -0x128) + 0x40));
  return;
}

