//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSDocumentTypeDescription : NSObject
{
    NSString *_className;
    int _role;
    NSString *_oldStyleName;
    NSString *_oldStyleAlias;
    id _identifierOrIdentifiers;
    NSArray *_exportableTypeIdentifiersOrOldStyleNames;
    NSArray *_fileNameExtensionsAndHFSFileTypes;
    NSString *_persistentStoreType;
    NSString *_userActivityType;
}

+ (id)_noneOrQuotingOfText:(id)arg1;
+ (void)_addUniqueNameOrNames:(id)arg1 toNames:(id)arg2;
+ (id)descriptionsWithDeclarations:(id)arg1;
+ (BOOL)_validateDeclarationStrings:(id)arg1 forKey:(id)arg2;
+ (BOOL)_validateDeclarationString:(id)arg1 forKey:(id)arg2;
+ (BOOL)parsesLSItemContentTypes;
+ (id)aliasesByName;
+ (id)namesByAlias;
- (id)userActivityType;
- (id)description;
- (id)persistentStoreType;
- (BOOL)isNativeName:(id)arg1;
- (void)getReadableNotWritable:(BOOL)arg1 names:(id)arg2;
- (id)fileNameExtensionsAndHFSFileTypes;
- (BOOL)matchesAnyFile;
- (BOOL)exactlyMatchesFileNameExtensionOrHFSFileType:(id)arg1;
- (id)appSpecificPresentableNameForName:(id)arg1;
- (BOOL)isIdentifiedByName:(id)arg1;
- (id)firstName;
- (BOOL)isViewableByThisApp;
- (BOOL)isEditableByThisApp;
- (id)className;
- (BOOL)isIdentifiedByUTIs;
- (void)dealloc;
- (id)_initWithDeclaration:(id)arg1 cachedNamesByAlias:(id)arg2;

@end

