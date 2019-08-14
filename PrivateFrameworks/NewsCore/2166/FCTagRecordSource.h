//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCTagRecordSource : FCRecordSource
{
    NSArray *_nonLocalizableKeys;
    unsigned long long _desiredFieldOptions;
}

+ (id)defaultCachePolicy;
@property(nonatomic) unsigned long long desiredFieldOptions; // @synthesize desiredFieldOptions=_desiredFieldOptions;
- (id)nonLocalizableKeys;
- (void).cxx_destruct;
- (id)saveTagRecords:(id)arg1;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefix;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)storeFilename;
- (id)localizableLanguageSpecificKeys;
- (id)localizableKeys;
- (id)experimentalizableKeys;
- (int)pbRecordType;
- (id)recordType;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;

@end

