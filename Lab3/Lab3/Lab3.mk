##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab3
ConfigurationName      :=Debug
WorkspacePath          := "/Users/Markus/C-projects/Lektion1/Lab3"
ProjectPath            := "/Users/Markus/C-projects/Lektion1/Lab3/Lab3"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Markus Andersson Noren
Date                   :=2013-10-31
CodeLitePath           :="/Users/Markus/Library/Application Support/codelite"
LinkerName             :=gcc
SharedObjectLinkerName :=gcc -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="Lab3.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := gcc
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := llvm-as


##
## User defined environment variables
##
CodeLiteDir:=/Users/Markus/Downloads/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/toText$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/toText$(ObjectSuffix): toText.c $(IntermediateDirectory)/toText$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/Markus/C-projects/Lektion1/Lab3/Lab3/toText.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/toText$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/toText$(DependSuffix): toText.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/toText$(ObjectSuffix) -MF$(IntermediateDirectory)/toText$(DependSuffix) -MM "toText.c"

$(IntermediateDirectory)/toText$(PreprocessSuffix): toText.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/toText$(PreprocessSuffix) "toText.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/toText$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/toText$(DependSuffix)
	$(RM) $(IntermediateDirectory)/toText$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) "../.build-debug/Lab3"


