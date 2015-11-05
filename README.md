# UE 4.9 Bug

## Steps to reproduce problem

 * Open project InstancedProperty.uproject
 * Open blueprint ContainerBp
 * Open blueprint InstancedBp
 * Compile blueprint InstancedBp

**Expected result**: ContainerBp still have a correct InstancedBp data.

**Actual result**: ContainerBp have InstancedBp with empty fields.

![Screenshot](screenshot.png)