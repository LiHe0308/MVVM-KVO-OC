//
//  ViewModel.h
//  MVVM-KVO-OC
//
//  Created by 李贺 on 2019/10/28.
//  Copyright © 2019 李贺. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ViewModel : NSObject

@property (nonatomic, copy)NSString *nameString;
@property (nonatomic, copy)NSString *racMsg;

- (void)getData;

@end

NS_ASSUME_NONNULL_END
