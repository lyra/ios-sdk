//
//  CardScanInterop.h
//  LyraPaymentSDK
//
//  Created by Lyra Network on 16/03/2020.
//  Copyright © 2020 Lyra Network. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class ScanData;
@protocol CardScanInteropDelegate <NSObject>

- (void) didRecognize:(ScanData *)scanData;

@end

@interface ScanData: NSObject

@property(nonatomic, retain) NSString *recognizedNumber;
@property(nonatomic, retain) NSString *recognizedHolderName;
@property(nonatomic, retain) NSString *recognizedExpireDateMonth;
@property(nonatomic, retain) NSString *recognizedExpireDateYear;

@end

@interface CardScanInterop : NSObject

- (instancetype) initWithContainer:(UIView *)viewContainer frameColor: (UIColor *)frameColor unavailableOrientationMsg: (NSString *)unavailableOrientationMsg bgColorForUnavailableMsg:(UIColor *) bgColorForUnavailableMsg delegate:(id <CardScanInteropDelegate>)delegate;
- (void) startScan;
- (void) stopScan;

@end




NS_ASSUME_NONNULL_END


