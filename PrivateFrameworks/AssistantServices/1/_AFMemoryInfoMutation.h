//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFMemoryInfoMutating-Protocol.h>

@class AFMemoryInfo, NSString;

@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating>
{
    AFMemoryInfo *_baseModel;
    unsigned long long _virtualMemorySizeInBytes;
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasVirtualMemorySizeInBytes:1;
        unsigned int hasNumberOfRegions:1;
        unsigned int hasPageSizeInBytes:1;
        unsigned int hasResidentMemorySizeInBytes:1;
        unsigned int hasPeakResidentMemorySizeInBytes:1;
        unsigned int hasPhysicalMemoryFootprintInBytes:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1;
- (void)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1;
- (void)setResidentMemorySizeInBytes:(unsigned long long)arg1;
- (void)setPageSizeInBytes:(int)arg1;
- (void)setNumberOfRegions:(int)arg1;
- (void)setVirtualMemorySizeInBytes:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

