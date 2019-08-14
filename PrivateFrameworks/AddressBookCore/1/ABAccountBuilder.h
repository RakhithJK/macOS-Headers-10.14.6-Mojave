//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABACAccount, ABAccountPersistence, NSString;
@protocol ABACAccountStore, ABAccountCustomizationPolicy;

@interface ABAccountBuilder : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_basePath;
    Class _sourceClass;
    CDUnknownBlockType _sourceCreationBlock;
    id <ABAccountCustomizationPolicy> _customizationPolicy;
    BOOL _isMainAccount;
    BOOL _supportsDistributionLists;
    Class _configurationClass;
    CDUnknownBlockType _searchPolicyBlock;
    ABAccountPersistence *_persistence;
    ABACAccount *_acAccount;
    id <ABACAccountStore> _accountStore;
}

@property(retain, nonatomic) id <ABACAccountStore> accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) ABACAccount *acAccount; // @synthesize acAccount=_acAccount;
@property(nonatomic) Class configurationClass; // @synthesize configurationClass=_configurationClass;
@property(nonatomic) BOOL isMainAccount; // @synthesize isMainAccount=_isMainAccount;
@property(retain, nonatomic) id <ABAccountCustomizationPolicy> customizationPolicy; // @synthesize customizationPolicy=_customizationPolicy;
@property(copy, nonatomic) CDUnknownBlockType primitiveSourceCreationBlock; // @synthesize primitiveSourceCreationBlock=_sourceCreationBlock;
@property(nonatomic) Class primitiveSourceClass; // @synthesize primitiveSourceClass=_sourceClass;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)makeAccountConfigurationWithAccount:(id)arg1;
- (id)makePersistence;
@property(retain, nonatomic) ABAccountPersistence *persistence;
- (id)makeSearchPolicyWithAccount:(id)arg1;
- (void)setSearchPolicyBlock:(CDUnknownBlockType)arg1;
- (id)newBaseURL;
- (id)baseURL;
- (id)newFutureSource;
- (id)buildMigrationAccount;
- (id)buildAccount;
- (void)setSourceCreationBlock:(CDUnknownBlockType)arg1;
- (void)setExistingSource:(id)arg1;
- (void)setSourceClass:(Class)arg1;
- (CDUnknownBlockType)sourceCreationBlock;
- (CDUnknownBlockType)defaultSourceCreationBlock;
- (void)overrideSourceClass:(Class)arg1;
- (id)accountComponents;
- (id)initWithIdentifier:(id)arg1;

@end

