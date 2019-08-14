//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSString, RKImportGroup;

@interface ImportRoll : NSObject
{
    struct vector<ImportPhoto *, std::__1::allocator<ImportPhoto *>> *_importPhotos;
    NSString *_rollName;
    BOOL _useRollName;
    NSString *_rollOriginalsPath;
    NSString *_thumbPath;
    NSString *_modifiedPath;
    double _rollDate;
    RKImportGroup *_importGroup;
    struct IPRoll *_roll;
}

@property struct IPRoll *roll; // @synthesize roll=_roll;
@property(retain) RKImportGroup *importGroup; // @synthesize importGroup=_importGroup;
- (void)findNaturalRollDate;
- (double)rollDate;
- (void)setRollDate:(double)arg1;
- (id)modifiedPath;
- (void)setModifiedPath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)rollOriginalsPath;
- (void)setRollOriginalsPath:(id)arg1;
- (id)rollName;
- (void)setRollName:(id)arg1;
- (BOOL)useRollName;
- (void)setUseRollName:(BOOL)arg1;
- (void)removeImportPhoto:(struct ImportPhoto *)arg1;
- (void)addImportPhoto:(struct ImportPhoto *)arg1;
- (struct ImportPhoto *)importPhotoAtIndex:(unsigned long long)arg1;
- (long long)importPhotoCount;
- (void)dealloc;
- (id)init;

@end

